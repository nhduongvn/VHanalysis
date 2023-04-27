#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16_ideal/pt_jet0_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16_ideal", "pt_jet0_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->Range(-100,0.8568836,566.6667,3.257148);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet0__224 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet0__224","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(10,48);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(11,195);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(12,362);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(13,470);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(14,511);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(15,520);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(16,549);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(17,460);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(18,483);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(19,446);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(20,338);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(21,360);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(22,332);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(23,298);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(24,271);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(25,217);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(26,202);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(27,180);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(28,220);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(29,153);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(30,144);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(31,129);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(32,122);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(33,85);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(34,106);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(35,92);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(36,85);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(37,69);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(38,66);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(39,55);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(40,50);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(41,45);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(42,50);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(43,57);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(44,45);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(45,47);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(46,35);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(47,34);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(48,25);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(49,26);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(50,26);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetBinContent(51,313);
   _DoubleJet_TripleTag_ideal_pt_jet0__224->SetEntries(8321);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8321   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  212.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  86.06");
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
