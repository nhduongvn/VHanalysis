#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal/pt_jet2_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal", "pt_jet2_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6631103,566.6667,2.957693);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__122 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__122","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(5,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(6,46);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(7,119);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(8,172);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(9,208);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(10,175);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(11,134);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(12,95);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(13,95);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(14,51);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(15,51);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(16,42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(17,25);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(18,24);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(19,22);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(20,7);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(21,8);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(22,9);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(23,7);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(24,5);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(25,4);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(28,5);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(32,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetEntries(1315);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1315   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  106.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__122);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal);
}
