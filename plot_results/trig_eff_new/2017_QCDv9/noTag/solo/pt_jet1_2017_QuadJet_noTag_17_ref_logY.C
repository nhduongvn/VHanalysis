#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ref/pt_jet1_2017_QuadJet_noTag_17_ref
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ref", "pt_jet1_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->Range(-100,1.368769,566.6667,5.462593);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__42 = new TH1D("_QuadJet_noTag_pt_jet1_ref__42","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(5,1764);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(6,27195);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(7,52851);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(8,59657);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(9,56527);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(10,48847);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(11,41209);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(12,33889);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(13,27100);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(14,22019);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(15,17907);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(16,14566);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(17,11902);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(18,9640);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(19,7884);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(20,6470);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(21,5329);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(22,4481);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(23,3681);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(24,3025);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(25,2615);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(26,2157);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(27,1950);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(28,1697);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(29,1382);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(30,1124);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(31,1035);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(32,911);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(33,801);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(34,724);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(35,619);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(36,513);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(37,447);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(38,401);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(39,346);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(40,312);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(41,279);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(42,252);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(43,240);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(44,207);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(45,185);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(46,191);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(47,148);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(48,144);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(49,120);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(50,128);
   _QuadJet_noTag_pt_jet1_ref__42->SetBinContent(51,1289);
   _QuadJet_noTag_pt_jet1_ref__42->SetEntries(476160);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 476160 ");
   ptstats_LaTex = ptstats->AddText("Mean  =    114");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.96");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1_ref__42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1_ref__42);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1_ref__42->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1_ref__42->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1_ref__42->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1_ref__42->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__42->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1_ref__42->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__42->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__42->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ref->cd();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ref);
}
