#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref/pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref", "pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->Range(-100,-0.8297864,566.6667,4.457777);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_pt_jet3_ref__132 = new TH1D("_DoubleJet_TripleTag_2b2c_pt_jet3_ref__132","",50,0,500);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(5,2181);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(6,4482);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(7,4176);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(8,3274);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(9,2218);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(10,1509);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(11,983);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(12,644);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(13,383);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(14,270);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(15,166);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(16,104);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(17,84);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(18,60);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(19,45);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(20,25);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(21,23);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(22,14);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(23,12);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(24,5);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(25,4);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(26,7);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(27,7);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(28,4);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(29,2);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(30,5);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(32,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(33,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(38,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetBinContent(46,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetEntries(20691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 20691  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  75.15");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.67");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_pt_jet3_ref__132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3_ref__132->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_2b2c_ref);
}
