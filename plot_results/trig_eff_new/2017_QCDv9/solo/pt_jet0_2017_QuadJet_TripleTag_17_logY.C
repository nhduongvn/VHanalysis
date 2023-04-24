#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:13:59 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,0.6121112,566.6667,3.785188);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__14 = new TH1D("_QuadJet_TripleTag_pt_jet0__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(7,17);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(8,112);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(9,393);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(10,776);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(11,1114);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(12,1379);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(13,1504);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(14,1550);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(15,1511);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(16,1417);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(17,1263);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(18,1205);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(19,975);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(20,879);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(21,809);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(22,697);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(23,600);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(24,571);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(25,468);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(26,433);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(27,350);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(28,322);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(29,326);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(30,280);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(31,199);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(32,209);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(33,213);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(34,199);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(35,173);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(36,145);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(37,137);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(38,109);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(39,114);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(40,87);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(41,86);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(42,90);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(43,79);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(44,57);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(45,71);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(46,54);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(47,54);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(48,49);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(49,37);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(50,40);
   _QuadJet_TripleTag_pt_jet0__14->SetBinContent(51,425);
   _QuadJet_TripleTag_pt_jet0__14->SetEntries(21578);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21578  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  188.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.16");
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
