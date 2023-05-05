#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_3B/pt_jet3_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_3B = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_3B", "pt_jet3_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->Range(-100,-0.7720036,566.6667,3.937732);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet3__77 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet3__77","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(5,778);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(6,1546);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(7,1476);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(8,1127);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(9,881);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(10,554);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(11,379);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(12,254);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(13,147);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(14,126);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(15,64);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(16,51);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(17,41);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(18,26);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(19,10);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(20,10);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(21,4);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(22,5);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(23,3);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(24,1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(25,1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(26,2);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(27,4);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(28,1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(29,1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetBinContent(37,1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetEntries(7493);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7493   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  76.17");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.81");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet3__77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet3__77->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3__77->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__77->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_3B);
}
