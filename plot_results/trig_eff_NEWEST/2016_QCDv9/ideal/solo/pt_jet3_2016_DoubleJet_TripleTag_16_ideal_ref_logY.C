#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref/pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-100,-0.6561588,566.6667,2.895129);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3_ref__24 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3_ref__24","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(5,61);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(6,134);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(7,183);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(8,117);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(9,97);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(10,67);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(11,55);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(12,36);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(13,21);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(14,11);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(15,10);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(16,7);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(17,4);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(18,2);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(19,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(20,2);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(21,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(22,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(24,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(26,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetBinContent(27,2);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetEntries(814);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 814    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  79.97");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.03");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet3_ref__24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__24->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref);
}
