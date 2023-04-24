#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:16 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__85 = new TH1D("_QuadJet_TripleTag_pt_jet3__85","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(5,0.01724986);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(6,0.03257924);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(7,0.05407892);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(8,0.07140486);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(9,0.07640212);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(10,0.08253402);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(11,0.08947886);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(12,0.08727811);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(13,0.08802934);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(14,0.09463563);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(15,0.08923077);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(16,0.121134);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(17,0.0926276);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(18,0.08947368);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(19,0.0464135);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(20,0.0969697);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(21,0.07746479);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(22,0.07446809);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(23,0.08196721);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(24,0.137931);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(25,0.06666667);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(26,0.04166667);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(27,0.0952381);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(28,0.1428571);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(29,0.07142857);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(30,0.08333333);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(32,0.2);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(33,0.1428571);
   _QuadJet_TripleTag_pt_jet3__85->SetBinContent(47,0.5);
   _QuadJet_TripleTag_pt_jet3__85->SetEntries(2.945399);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  244.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    124");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__85->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__85);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_pt_jet3__85->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__85->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__85->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_pt_jet3__85->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__85->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__85->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__85->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_pt_jet3__85->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__85->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__85->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__85->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__85->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__85->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}
