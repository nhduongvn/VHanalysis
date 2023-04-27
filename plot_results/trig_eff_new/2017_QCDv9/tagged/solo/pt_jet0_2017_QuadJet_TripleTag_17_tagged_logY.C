#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_tagged/pt_jet0_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_tagged", "pt_jet0_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.6861558,566.6667,3.165102);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__56 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__56","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(7,1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(8,27);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,85);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,143);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,202);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,259);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,285);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,318);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,303);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,288);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,263);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,247);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,203);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,189);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,141);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,153);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,142);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,139);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,111);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,103);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,92);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,77);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,88);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,64);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,44);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,56);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,53);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,40);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,40);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,43);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,30);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,29);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,36);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,17);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,22);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,20);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,12);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,15);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,8);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,17);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,13);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,20);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,9);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,136);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(4585);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4585   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.49");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__56);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_tagged);
}
