#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_3B/pt_jet2_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_3B = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_3B", "pt_jet2_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->Range(-100,-0.7570146,566.6667,3.802832);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet2__71 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet2__71","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(5,47);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(6,327);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(7,653);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(8,926);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(9,1173);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(10,1082);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(11,832);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(12,625);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(13,457);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(14,318);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(15,224);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(16,193);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(17,155);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(18,99);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(19,92);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(20,72);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(21,48);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(22,42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(23,25);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(24,20);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(25,17);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(26,9);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(27,7);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(28,7);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(29,6);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(30,2);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(31,9);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(32,5);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(33,8);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(35,4);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(38,1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(40,1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(41,1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(42,1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(43,2);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(45,2);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetBinContent(47,1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetEntries(7493);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7493   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  104.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.93");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet2__71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet2__71->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet2__71->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2__71->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_3B);
}
