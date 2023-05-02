#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref/pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref = new TCanvas("pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref", "pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->Range(-100,-0.6776735,566.6667,3.088761);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetLogy();
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_pt_jet2_ref__54 = new TH1D("_QuadJet_noTagV5_ideal_pt_jet2_ref__54","",50,0,500);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(8,202);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(9,272);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(10,221);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(11,155);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(12,113);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(13,114);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(14,59);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(15,55);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(16,49);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(17,28);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(18,26);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(19,28);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(20,9);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(21,11);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(22,10);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(23,9);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(24,5);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(25,4);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(26,3);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(27,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(28,8);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(29,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(31,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(32,2);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(33,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(34,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(35,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetBinContent(37,1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetEntries(1390);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1390   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  112.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_pt_jet2_ref__54);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet2_ref__54->Draw("HIST");
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->Modified();
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->cd();
   pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref->SetSelected(pt_jet2_2018_QuadJet_noTagV5_18_ideal_ref);
}
