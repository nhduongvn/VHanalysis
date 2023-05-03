#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_ideal/pt_jet0_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_ideal", "pt_jet0_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__1 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__1","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(9,0.2857143);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(10,0.4444444);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(11,0.6363636);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(12,0.52);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(13,0.5294118);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(14,0.5789474);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(15,0.7368421);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(16,0.2352941);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(17,0.6111111);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(18,0.8235294);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(19,0.4545455);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(20,0.5333333);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(21,0.5);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(22,0.5454545);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(23,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(24,0.9);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(25,0.3);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(27,0.5714286);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(30,0.4);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(33,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(34,0.6);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(35,0.5);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(36,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(38,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(48,1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetBinContent(51,0.75);
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetEntries(24.37309);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 24     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  291.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  114.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet0__1->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__1->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__1->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_ideal);
}
