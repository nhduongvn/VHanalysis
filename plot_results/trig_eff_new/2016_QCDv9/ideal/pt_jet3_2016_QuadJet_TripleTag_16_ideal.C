#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal/pt_jet3_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
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
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(5,0.2222854);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(6,0.3527989);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(7,0.4346091);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(8,0.4947218);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(9,0.5024462);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(10,0.5162722);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(11,0.5494994);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(12,0.5721477);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(13,0.5621469);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(14,0.6260163);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(15,0.5032258);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(16,0.51);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(17,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(18,0.5357143);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(19,0.5454545);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(20,0.6818182);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(21,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(22,0.4285714);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(23,0.7272727);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(24,0.4);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(25,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(26,0.5714286);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(27,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(28,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(29,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(30,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet3__253->SetEntries(15.83643);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  196.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.88");
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
