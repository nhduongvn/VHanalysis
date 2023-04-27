#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.8267603,566.6667,4.430543);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2_ref__123 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2_ref__123","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(5,194);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(6,2056);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(7,4064);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(8,4239);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(9,3479);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(10,2547);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(11,1947);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(12,1366);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(13,1072);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(14,749);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(15,546);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(16,464);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(17,297);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(18,215);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(19,186);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(20,138);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(21,97);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(22,72);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(23,62);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(24,35);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(25,33);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(26,23);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(27,15);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(28,20);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(29,16);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(30,6);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(31,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(32,6);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(33,6);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(34,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(35,4);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(36,7);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(37,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(38,4);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(39,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(44,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(49,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(51,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetEntries(23989);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23989  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  93.43");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  36.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2_ref__123);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref);
}
