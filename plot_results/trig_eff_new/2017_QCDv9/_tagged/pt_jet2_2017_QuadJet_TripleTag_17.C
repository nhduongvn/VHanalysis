#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-109.1764,-0.09692308,585.8166,0.7107692);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__277 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__277","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(5,0.02141901);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(6,0.05678836);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(7,0.1200577);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(8,0.1652893);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(9,0.2033478);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(10,0.232568);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(11,0.2012128);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(12,0.215748);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(13,0.2324649);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(14,0.2307692);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(15,0.2699387);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(16,0.2281106);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(17,0.2654545);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(18,0.2070707);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(19,0.2787879);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(20,0.2822581);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(21,0.3152174);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(22,0.2205882);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(23,0.1403509);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(24,0.1875);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(25,0.3103448);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(26,0.1904762);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(27,0.2857143);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(28,0.2222222);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(29,0.1428571);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(30,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(31,0.2222222);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(32,0.25);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(33,0.6);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(35,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetBinContent(44,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetEntries(7.798779);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  230.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  97.83");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet2__277->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__277->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__277->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
