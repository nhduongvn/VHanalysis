#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_ideal/pt_jet2_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:18:39 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_ideal", "pt_jet2_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.7593251,566.6667,3.823625);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet2__248 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet2__248","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(5,34);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(6,298);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(7,643);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(8,934);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(9,1224);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(10,1164);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(11,983);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(12,747);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(13,540);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(14,439);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(15,315);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(16,234);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(17,180);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(18,120);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(19,94);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(20,80);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(21,61);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(22,48);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(23,45);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(24,20);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(25,18);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(26,13);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(27,14);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(28,13);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(29,12);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(30,5);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(31,8);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(32,9);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(33,5);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(34,4);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(35,4);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(36,4);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(37,2);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(39,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(43,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(44,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(45,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetBinContent(46,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetEntries(8321);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8321   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  107.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  41.14");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet2__248);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet2__248->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__248->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_ideal);
}
