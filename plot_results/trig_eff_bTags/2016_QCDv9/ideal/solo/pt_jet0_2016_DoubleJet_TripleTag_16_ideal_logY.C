#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16_ideal/pt_jet0_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16_ideal", "pt_jet0_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.5749504,566.6667,2.164253);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet0__224 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet0__224","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(10,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(11,13);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(12,21);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(13,30);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(14,26);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(15,41);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(16,33);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(17,33);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(18,29);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(19,27);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(20,30);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(21,21);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(22,26);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(23,25);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(24,26);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(25,15);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(26,15);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(27,16);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(28,20);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(29,14);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(30,11);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(31,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(32,12);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(33,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(34,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(35,10);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(36,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(37,7);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(38,7);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(39,9);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(40,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(41,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(42,8);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(43,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(45,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(46,2);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(47,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(48,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(49,3);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(50,1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(51,23);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetEntries(602);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 602    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  220.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.87");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet0__224);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16_ideal);
}
