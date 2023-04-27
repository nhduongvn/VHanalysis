#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal/pt_jet1_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal", "pt_jet1_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6438965,566.6667,2.784768);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__116 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__116","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(7,15);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(8,42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(9,91);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(10,113);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(11,146);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(12,128);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(13,113);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(14,105);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(15,73);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(16,71);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(17,64);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(18,54);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(19,53);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(20,38);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(21,27);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(22,22);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(23,27);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(24,17);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(25,16);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(26,11);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(27,7);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(28,12);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(29,9);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(30,7);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(31,11);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(32,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(33,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(36,7);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(37,3);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(51,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetEntries(1315);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1315   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  148.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.79");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__116);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->Draw("HIST");
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal);
}
