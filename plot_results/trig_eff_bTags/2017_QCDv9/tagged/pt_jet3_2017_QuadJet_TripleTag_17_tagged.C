#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_tagged/pt_jet3_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_tagged", "pt_jet3_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(5,0.2666667);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(6,0.3944954);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(7,0.6101695);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(8,0.6851852);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(9,0.6612903);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(10,0.7093023);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(11,0.7241379);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(12,0.6923077);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(13,0.625);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(14,0.75);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(15,0.8333333);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(16,0.7272727);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(17,0.5714286);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(18,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(19,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(20,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(21,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetEntries(12.91726);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  143.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  53.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_tagged);
}
