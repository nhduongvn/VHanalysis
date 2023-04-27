#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_tagged/pt_jet3_2018_QuadJet_noTag_18_tagged
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_tagged", "pt_jet3_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged->Range(-100,-0.5928367,566.6667,2.32523);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3__77 = new TH1D("_QuadJet_noTag_tagged_pt_jet3__77","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(5,17);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(6,52);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(7,57);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(8,46);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(9,24);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(10,16);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(11,13);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(12,7);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(13,4);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(14,7);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(15,3);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(16,2);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(17,1);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(18,1);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(20,2);
   _QuadJet_noTag_tagged_pt_jet3__77->SetBinContent(26,1);
   _QuadJet_noTag_tagged_pt_jet3__77->SetEntries(253);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 253    ");
   ptstats_LaTex = ptstats->AddText("Mean  =   77.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.95");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3__77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet3__77->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3__77->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3__77->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet3__77->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__77->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet3__77->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__77->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__77->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet3_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet3_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet3_2018_QuadJet_noTag_18_tagged);
}
