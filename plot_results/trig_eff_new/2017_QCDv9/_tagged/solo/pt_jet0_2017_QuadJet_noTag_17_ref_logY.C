#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ref/pt_jet0_2017_QuadJet_noTag_17_ref
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ref", "pt_jet0_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->Range(-100,0.8633902,566.6667,3.843168);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0_ref__234 = new TH1D("_QuadJet_noTag_tagged_pt_jet0_ref__234","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(6,121);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(7,568);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(8,1056);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(9,1425);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(10,1701);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(11,1852);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(12,1755);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(13,1760);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(14,1578);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(15,1507);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(16,1387);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(17,1227);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(18,1145);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(19,970);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(20,866);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(21,736);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(22,702);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(23,599);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(24,585);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(25,484);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(26,418);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(27,363);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(28,330);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(29,340);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(30,222);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(31,233);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(32,229);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(33,229);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(34,164);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(35,157);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(36,133);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(37,131);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(38,106);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(39,110);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(40,99);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(41,86);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(42,84);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(43,75);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(44,72);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(45,55);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(46,59);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(47,41);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(48,50);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(49,36);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(50,29);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetBinContent(51,465);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetEntries(26340);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 26340  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  168.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.57");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0_ref__234);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet0_ref__234->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__234->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ref->cd();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ref);
}
