#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ideal_ref/pt_jet3_2018_QuadJet_noTag_18_ideal_ref
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ideal_ref", "pt_jet3_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->Range(-100,-0.7017731,566.6667,3.305658);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3_ref__132 = new TH1D("_QuadJet_noTag_ideal_pt_jet3_ref__132","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(5,147);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(6,424);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(7,377);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(8,278);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(9,165);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(10,133);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(11,87);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(12,64);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(13,41);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(14,29);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(15,23);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(16,12);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(17,13);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(18,4);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(19,4);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(20,5);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(21,6);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(23,2);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(24,2);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(25,1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetBinContent(29,1);
   _QuadJet_noTag_ideal_pt_jet3_ref__132->SetEntries(1818);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1818   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.06");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.67");
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
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->cd();
   pt_jet3_2018_QuadJet_noTag_18_ideal_ref->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ideal_ref);
}
