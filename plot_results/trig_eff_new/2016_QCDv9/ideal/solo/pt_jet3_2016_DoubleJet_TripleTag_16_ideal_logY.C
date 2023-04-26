#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal/pt_jet3_2016_DoubleJet_TripleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.7728053,566.6667,3.944947);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3__260 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3__260","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(5,686);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(6,1568);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(7,1569);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(8,1378);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(9,986);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(10,704);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(11,502);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(12,342);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(13,201);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(14,155);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(15,77);
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetBinContent(16,52);
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
   _DoubleJet_TripleTag_ideal_pt_jet3__260->SetEntries(8374);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8374   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  78.97");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.37");
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
