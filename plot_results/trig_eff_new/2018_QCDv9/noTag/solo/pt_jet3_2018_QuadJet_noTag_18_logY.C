#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18/pt_jet3_2018_QuadJet_noTag_18
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18 = new TCanvas("pt_jet3_2018_QuadJet_noTag_18", "pt_jet3_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18->Range(-100,-0.7470336,566.6667,3.713002);
   pt_jet3_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__23 = new TH1D("_QuadJet_noTag_pt_jet3__23","",50,0,500);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(5,462);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(6,976);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(7,833);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(8,541);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(9,284);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(10,181);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(11,115);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(12,63);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(13,42);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(14,29);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(15,18);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(16,8);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(17,8);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(18,5);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(19,3);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(20,5);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(21,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(22,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(23,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(24,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(25,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(26,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(28,1);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(35,1);
   _QuadJet_noTag_pt_jet3__23->SetEntries(3581);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3581   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  69.48");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  22.84");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3__23->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18->Modified();
   pt_jet3_2018_QuadJet_noTag_18->cd();
   pt_jet3_2018_QuadJet_noTag_18->SetSelected(pt_jet3_2018_QuadJet_noTag_18);
}
