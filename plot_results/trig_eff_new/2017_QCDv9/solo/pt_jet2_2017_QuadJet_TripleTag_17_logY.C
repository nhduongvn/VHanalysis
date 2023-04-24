#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-100,-0.8195241,566.6667,4.365417);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__62 = new TH1D("_QuadJet_TripleTag_pt_jet2__62","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(5,146);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(6,1676);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(7,3243);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(8,3710);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(9,3457);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(10,2615);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(11,1794);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(12,1338);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(13,949);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(14,670);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(15,528);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(16,370);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(17,259);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(18,196);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(19,126);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(20,129);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(21,86);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(22,57);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(23,43);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(24,34);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(25,28);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(26,19);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(27,21);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(28,27);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(29,9);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(30,5);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(31,8);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(32,3);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(33,8);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(34,4);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(35,4);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(36,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(39,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(42,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(44,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(46,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(49,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet2__62->SetEntries(21578);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21578  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  94.11");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   35.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__62->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__62);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__62->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
