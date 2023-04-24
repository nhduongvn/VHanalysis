#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16/pt_jet3_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16", "pt_jet3_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__289 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__289","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(5,0.220852);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(6,0.352581);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(7,0.4343452);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(8,0.4950411);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(9,0.502907);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(10,0.5139296);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(11,0.5495595);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(12,0.5719064);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(13,0.5630252);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(14,0.6275304);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(15,0.503268);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(16,0.5148515);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(17,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(18,0.5357143);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(19,0.5454545);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(20,0.6818182);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(21,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(22,0.4285714);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(23,0.7272727);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(24,0.4);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(25,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(26,0.5714286);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(27,0.8);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(28,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(29,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(30,0.8);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetEntries(15.84006);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  196.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.86");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__289);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__289->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__289->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__289->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16->cd();
   pt_jet3_2016_QuadJet_TripleTag_16->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16);
}
