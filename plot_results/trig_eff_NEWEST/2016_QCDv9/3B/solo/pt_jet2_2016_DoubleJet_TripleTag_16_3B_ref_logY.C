#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref/pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref", "pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->Range(-100,-0.7858453,566.6667,4.062307);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet2_ref__72 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet2_ref__72","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(5,109);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(6,734);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(7,1370);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(8,1762);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(9,1995);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(10,1733);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(11,1275);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(12,916);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(13,693);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(14,449);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(15,329);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(16,300);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(17,212);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(18,133);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(19,120);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(20,93);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(21,64);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(22,53);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(23,35);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(24,31);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(25,25);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(26,14);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(27,12);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(28,10);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(29,9);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(30,6);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(31,10);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(32,7);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(33,9);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(34,1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(35,5);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(38,2);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(40,1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(41,3);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(42,1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(43,3);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(44,1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(45,2);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetBinContent(47,1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetEntries(12528);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12528  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  100.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  38.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet2_ref__72);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet2_ref__72->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_3B_ref);
}
