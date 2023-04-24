#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16/pt_jet3_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16", "pt_jet3_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet3__298 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet3__298","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(5,0.006352765);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(6,0.01068427);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(7,0.0197593);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(8,0.02210258);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(9,0.02906977);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(10,0.02932551);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(11,0.02312775);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(12,0.02006689);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(13,0.0140056);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(14,0.04048583);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(15,0.05228758);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(16,0.02970297);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(18,0.05357143);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(19,0.06818182);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(28,0.5);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetBinContent(30,0.2);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetEntries(1.118724);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    225");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  76.69");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet3__298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__298->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16);
}
