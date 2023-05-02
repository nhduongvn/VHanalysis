#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.7011291,566.6667,3.299862);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__57 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__57","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(5,147);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(6,419);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(7,374);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(8,275);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(9,165);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(10,132);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(11,86);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(12,62);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(13,41);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(14,29);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(15,23);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(16,12);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(17,13);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(18,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(19,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(20,5);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(21,6);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(23,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(24,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetEntries(1803);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1803   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.07");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.72");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__57);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__57->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal_ref);
}
