#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16_3B/pt_jet0_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16_3B = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16_3B", "pt_jet0_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->Range(-100,0.6115173,566.6667,3.246957);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet0__59 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet0__59","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(10,49);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(11,197);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(12,357);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(13,474);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(14,481);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(15,504);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(16,508);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(17,420);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(18,448);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(19,416);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(20,341);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(21,326);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(22,294);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(23,243);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(24,239);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(25,210);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(26,180);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(27,168);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(28,134);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(29,140);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(30,119);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(31,119);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(32,100);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(33,68);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(34,96);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(35,62);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(36,65);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(37,64);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(38,55);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(39,58);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(40,45);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(41,34);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(42,37);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(43,29);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(44,28);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(45,25);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(46,27);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(47,19);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(48,29);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(49,19);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(50,15);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetBinContent(51,251);
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetEntries(7493);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7493   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  206.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.22");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet0__59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet0__59->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet0__59->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet0__59->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16_3B->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16_3B);
}
