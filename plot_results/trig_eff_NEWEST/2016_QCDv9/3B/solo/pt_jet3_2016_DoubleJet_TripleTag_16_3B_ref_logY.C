#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref/pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref", "pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->Range(-100,-0.8060772,566.6667,4.244395);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet3_ref__78 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet3_ref__78","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(5,1596);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(6,2896);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(7,2521);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(8,1817);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(9,1315);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(10,824);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(11,534);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(12,351);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(13,208);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(14,160);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(15,89);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(16,70);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(17,51);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(18,33);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(19,12);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(20,12);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(21,7);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(22,11);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(23,3);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(24,4);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(25,2);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(26,3);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(27,5);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(28,1);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(29,2);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetBinContent(37,1);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetEntries(12528);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12528  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  73.29");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.59");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet3_ref__78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3_ref__78->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_3B_ref);
}
