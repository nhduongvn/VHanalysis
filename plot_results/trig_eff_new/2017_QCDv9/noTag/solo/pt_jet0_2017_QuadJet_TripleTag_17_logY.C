#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:14 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,0.5220439,566.6667,3.752585);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__14 = new TH1D("_QuadJet_TripleTag_pt_jet0__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(7,14);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(8,94);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(9,351);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(10,715);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(11,1022);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(12,1250);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(13,1367);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(14,1419);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(15,1379);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(16,1297);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(17,1150);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(18,1112);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(19,882);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(20,805);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(21,740);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(22,638);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(23,554);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(24,528);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(25,442);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(26,396);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(27,312);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(28,295);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(29,304);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(30,262);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(31,181);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(32,198);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(33,198);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(34,183);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(35,160);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(36,134);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(37,129);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(38,94);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(39,107);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(40,81);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(41,81);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(42,79);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(43,76);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(44,56);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(45,65);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(46,44);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(47,50);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(48,50);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(49,35);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(50,33);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(51,392);
   _QuadJet_TripleTag_pt_jet0__14->SetEntries(19754);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19754  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  188.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   81.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet0__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet0__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet0__14->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet0__14->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet0__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet0__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet0__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__14->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17->cd();
   pt_jet0_2017_QuadJet_TripleTag_17->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17);
}
