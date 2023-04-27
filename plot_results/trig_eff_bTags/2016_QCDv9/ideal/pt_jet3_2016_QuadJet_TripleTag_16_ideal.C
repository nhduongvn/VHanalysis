#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal/pt_jet3_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal", "pt_jet3_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__253 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__253","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(5,0.4375);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(6,0.7088608);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(7,0.8651163);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(8,0.9016393);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(9,0.8863636);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(10,0.8666667);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(11,0.8431373);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(12,0.9117647);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(13,0.7368421);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(14,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(15,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(16,0.8571429);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(17,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(18,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetEntries(16.81503);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  147.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.57");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__253);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__253->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal);
}
