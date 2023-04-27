#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal/pt_jet3_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.6384241,566.6667,2.735517);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3__260 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3__260","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(5,37);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(6,90);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(7,132);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(8,92);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(9,74);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(10,52);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(11,43);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(12,31);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(13,15);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(14,9);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(15,8);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(16,6);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(17,4);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(18,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(19,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(20,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(24,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(26,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(27,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetEntries(602);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 602    ");
   ptstats_LaTex = ptstats->AddText("Mean  =   81.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.76");
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
