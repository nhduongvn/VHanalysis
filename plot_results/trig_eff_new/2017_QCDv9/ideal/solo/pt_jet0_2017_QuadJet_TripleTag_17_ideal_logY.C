#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_ideal/pt_jet0_2017_QuadJet_TripleTag_17_ideal
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_ideal", "pt_jet0_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.347497,566.6667,3.127473);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__110 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__110","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(8,11);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(9,67);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(10,124);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(11,186);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(12,248);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(13,282);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(14,318);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(15,300);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(16,287);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(17,262);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(18,245);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(19,201);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(20,189);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(21,141);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(22,153);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(23,142);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(24,139);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(25,111);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(26,102);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(27,92);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(28,77);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(29,88);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(30,64);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(31,44);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(32,56);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(33,53);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(34,40);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(35,40);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(36,43);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(37,30);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(38,29);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(39,36);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(40,17);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(41,22);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(42,20);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(43,12);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(44,15);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(45,8);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(46,17);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(47,13);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(48,20);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(49,2);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(50,9);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(51,136);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetEntries(4491);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4491   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  196.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.17");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__110);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_ideal);
}
