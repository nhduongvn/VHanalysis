#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_3B_ref/pt_jet2_2016_QuadJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_3B_ref = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_3B_ref", "pt_jet2_2016_QuadJet_TripleTag_16_3B_ref",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->Range(-100,-0.8206393,566.6667,4.375454);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet2_ref__69 = new TH1D("_QuadJet_TripleTag_3B_pt_jet2_ref__69","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(5,633);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(6,3371);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(7,3787);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(8,3181);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(9,2400);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(10,1729);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(11,1275);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(12,912);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(13,692);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(14,448);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(15,329);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(16,300);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(17,212);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(18,133);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(19,120);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(20,90);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(21,64);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(22,53);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(23,35);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(24,31);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(25,25);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(26,14);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(27,12);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(28,10);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(29,9);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(30,6);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(31,10);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(32,7);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(33,9);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(34,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(35,5);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(38,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(40,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(41,3);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(42,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(43,3);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(44,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(45,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetBinContent(47,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetEntries(19917);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19917  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  86.34");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.93");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet2_ref__69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__69->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_3B_ref->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_3B_ref);
}
