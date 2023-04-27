#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal/pt_jet1_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_ideal", "pt_jet1_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.07284996,566.6667,3.665949);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1__236 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1__236","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(10,789);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(11,1034);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(12,1008);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(13,815);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(14,768);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(15,596);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(16,511);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(17,412);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(18,349);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(19,297);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(20,258);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(21,234);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(22,178);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(23,152);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(24,138);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(25,100);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(26,75);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(27,77);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(28,51);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(29,52);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(30,47);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(31,46);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(32,33);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(33,30);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(34,28);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(35,17);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(36,23);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(37,19);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(38,20);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(39,12);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(40,16);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(41,16);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(42,9);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(43,14);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(44,10);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(45,14);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(46,8);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(47,9);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(48,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(49,4);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(50,4);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(51,42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetEntries(8321);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8321   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  155.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   63.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1__236);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal);
}
