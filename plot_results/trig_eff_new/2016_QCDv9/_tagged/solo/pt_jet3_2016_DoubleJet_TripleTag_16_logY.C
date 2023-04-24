#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16/pt_jet3_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16", "pt_jet3_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->Range(-100,-0.7787011,566.6667,3.99801);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet3__296 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet3__296","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(5,776);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(6,1749);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(7,1707);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(8,1456);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(9,1000);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(10,704);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(11,502);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(12,342);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(13,201);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(14,155);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(15,77);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(16,52);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(17,39);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(18,30);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(19,24);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(20,15);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(21,11);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(22,6);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(23,8);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(24,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(25,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(26,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(27,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(28,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(29,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(30,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(32,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetEntries(8875);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8875   ");
   ptstats_LaTex = ptstats->AddText("Mean  =   77.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.99");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet3__296);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet3__296->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__296->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16);
}
