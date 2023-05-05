#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_2b2c/pt_jet3_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_2b2c", "pt_jet3_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->Range(-100,-0.7781082,566.6667,3.992673);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_pt_jet3__131 = new TH1D("_DoubleJet_TripleTag_2b2c_pt_jet3__131","",50,0,500);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(5,752);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(6,1730);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(7,1726);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(8,1493);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(9,1082);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(10,779);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(11,534);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(12,367);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(13,218);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(14,166);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(15,85);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(16,54);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(17,42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(18,34);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(19,25);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(20,17);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(21,11);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(22,6);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(23,8);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(24,2);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(25,2);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(26,4);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(27,5);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(28,2);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(29,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(30,4);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(32,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetBinContent(33,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetEntries(9151);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9151   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  78.76");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.16");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_pt_jet3__131);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__131->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_2b2c);
}
