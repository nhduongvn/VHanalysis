#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal/pt_jet1_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal", "pt_jet1_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6435234,566.6667,2.78141);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__20 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__20","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(7,15);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(8,42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(9,90);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(10,111);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(11,145);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(12,126);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(13,113);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(14,104);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(15,71);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(16,71);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(17,64);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(18,53);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(19,53);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(20,37);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(21,26);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(22,21);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(23,27);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(24,17);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(25,16);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(26,11);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(27,7);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(28,12);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(29,9);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(30,7);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(31,11);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(32,5);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(33,5);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(36,7);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(37,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetBinContent(51,2);
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetEntries(1301);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1301   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  148.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__20->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__20->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__20->Draw("HIST");
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal);
}
