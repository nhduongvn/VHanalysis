#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17/pt_jet3_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17 = new TCanvas("pt_jet3_2017_QuadJet_noTag_17", "pt_jet3_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17->Range(-100,-0.7354182,566.6667,3.608463);
   pt_jet3_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__89 = new TH1D("_QuadJet_noTag_pt_jet3__89","",50,0,500);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(5,417);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(6,788);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(7,529);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(8,384);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(9,213);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(10,101);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(11,71);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(12,43);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(13,32);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(14,17);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(15,15);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(16,8);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(17,2);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(18,3);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(19,1);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(20,2);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(29,1);
   _QuadJet_noTag_pt_jet3__89->SetEntries(2627);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2627   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  67.41");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  20.86");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3__89->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17->Modified();
   pt_jet3_2017_QuadJet_noTag_17->cd();
   pt_jet3_2017_QuadJet_noTag_17->SetSelected(pt_jet3_2017_QuadJet_noTag_17);
}
