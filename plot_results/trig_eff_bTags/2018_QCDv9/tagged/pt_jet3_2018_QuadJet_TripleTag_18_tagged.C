#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_tagged/pt_jet3_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_tagged", "pt_jet3_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(5,0.2627986);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(6,0.456446);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(7,0.6836735);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(8,0.797153);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(9,0.830303);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(10,0.8646617);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(11,0.8965517);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(12,0.875);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(13,0.8292683);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(14,0.8275862);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(15,0.7826087);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(16,0.75);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(17,0.9230769);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(18,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(19,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(20,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(21,0.8333333);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(23,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(24,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetEntries(17.11246);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  157.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.59");
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
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_tagged);
}
