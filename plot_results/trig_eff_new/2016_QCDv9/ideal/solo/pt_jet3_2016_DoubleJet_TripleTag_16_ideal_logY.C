#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal/pt_jet3_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:18:39 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.7724233,566.6667,3.94151);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3__260 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3__260","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(5,681);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(6,1552);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(7,1558);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(8,1371);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(9,979);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(10,702);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(11,498);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(12,341);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(13,201);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(14,155);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(15,78);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(16,51);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(17,39);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(18,30);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(19,24);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(20,15);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(21,11);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(22,6);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(23,8);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(24,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(25,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(26,4);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(27,4);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(28,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(29,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(30,4);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(32,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetEntries(8321);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8321   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  79.03");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet3__260);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ideal);
}
