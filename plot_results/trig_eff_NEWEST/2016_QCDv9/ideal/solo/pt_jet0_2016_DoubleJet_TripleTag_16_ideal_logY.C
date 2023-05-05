#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16_ideal/pt_jet0_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16_ideal", "pt_jet0_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.5800039,566.6667,2.209735);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet0__5 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet0__5","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(10,4);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(11,14);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(12,28);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(13,33);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(14,31);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(15,45);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(16,39);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(17,37);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(18,32);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(19,28);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(20,35);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(21,22);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(22,31);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(23,25);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(24,28);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(25,17);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(26,16);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(27,19);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(28,20);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(29,14);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(30,13);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(31,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(32,13);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(33,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(34,11);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(35,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(36,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(37,7);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(38,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(39,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(40,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(41,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(42,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(43,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(45,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(46,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(47,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(48,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(49,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(50,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetBinContent(51,23);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetEntries(666);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 666    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  218.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   85.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet0__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet0__5->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__5->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16_ideal);
}
