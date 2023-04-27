#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_ideal_ref/pt_jet3_2017_QuadJet_noTag_17_ideal_ref
//=========  (Wed Apr 26 16:41:51 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_ideal_ref = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_ideal_ref", "pt_jet3_2017_QuadJet_noTag_17_ideal_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->Range(-100,-0.8511479,566.6667,4.650031);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3_ref__132 = new TH1D("_QuadJet_noTag_ideal_pt_jet3_ref__132","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(5,2942);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(6,6643);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(7,5079);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(8,3390);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(9,2086);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(10,1316);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(11,873);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(12,554);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(13,351);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(14,255);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(15,163);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(16,105);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(17,69);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(18,57);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(19,29);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(20,15);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(21,19);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(22,14);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(23,9);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(24,3);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(25,4);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(26,2);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(27,3);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(28,4);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(29,2);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(30,1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(45,1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetEntries(23989);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23989  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  71.01");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.19");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet3_ref__132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->Modified();
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->cd();
   pt_jet3_2017_QuadJet_noTag_17_ideal_ref->SetSelected(pt_jet3_2017_QuadJet_noTag_17_ideal_ref);
}
