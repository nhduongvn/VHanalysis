#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_algo_16()
{
//=========Macro generated from canvas: H_mass_algo_16/H_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *H_mass_algo_16 = new TCanvas("H_mass_algo_16", "H_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_16->SetHighLightColor(2);
   H_mass_algo_16->Range(-80,-0.8083727,453.3333,7.275354);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__387 = new TH1D("VbbHcc_algo_H_mass__387","",40,0,400);
   VbbHcc_algo_H_mass__387->SetBinContent(4,0.01121096);
   VbbHcc_algo_H_mass__387->SetBinContent(5,0.1064519);
   VbbHcc_algo_H_mass__387->SetBinContent(6,0.2955078);
   VbbHcc_algo_H_mass__387->SetBinContent(7,0.7534974);
   VbbHcc_algo_H_mass__387->SetBinContent(8,2.04216);
   VbbHcc_algo_H_mass__387->SetBinContent(9,4.684534);
   VbbHcc_algo_H_mass__387->SetBinContent(10,6.15903);
   VbbHcc_algo_H_mass__387->SetBinContent(11,5.255638);
   VbbHcc_algo_H_mass__387->SetBinContent(12,5.317038);
   VbbHcc_algo_H_mass__387->SetBinContent(13,5.423135);
   VbbHcc_algo_H_mass__387->SetBinContent(14,4.105976);
   VbbHcc_algo_H_mass__387->SetBinContent(15,2.421802);
   VbbHcc_algo_H_mass__387->SetBinContent(16,1.613807);
   VbbHcc_algo_H_mass__387->SetBinContent(17,1.219214);
   VbbHcc_algo_H_mass__387->SetBinContent(18,1.018178);
   VbbHcc_algo_H_mass__387->SetBinContent(19,0.8795327);
   VbbHcc_algo_H_mass__387->SetBinContent(20,0.8673314);
   VbbHcc_algo_H_mass__387->SetBinContent(21,0.803026);
   VbbHcc_algo_H_mass__387->SetBinContent(22,0.8001827);
   VbbHcc_algo_H_mass__387->SetBinContent(23,0.7518684);
   VbbHcc_algo_H_mass__387->SetBinContent(24,0.7777855);
   VbbHcc_algo_H_mass__387->SetBinContent(25,0.6905068);
   VbbHcc_algo_H_mass__387->SetBinContent(26,0.726255);
   VbbHcc_algo_H_mass__387->SetBinContent(27,0.6777113);
   VbbHcc_algo_H_mass__387->SetBinContent(28,0.6945046);
   VbbHcc_algo_H_mass__387->SetBinContent(29,0.6464845);
   VbbHcc_algo_H_mass__387->SetBinContent(30,0.6312182);
   VbbHcc_algo_H_mass__387->SetBinContent(31,0.6136524);
   VbbHcc_algo_H_mass__387->SetBinContent(32,0.5937857);
   VbbHcc_algo_H_mass__387->SetBinContent(33,0.5771887);
   VbbHcc_algo_H_mass__387->SetBinContent(34,0.5895874);
   VbbHcc_algo_H_mass__387->SetBinContent(35,0.5762165);
   VbbHcc_algo_H_mass__387->SetBinContent(36,0.5069048);
   VbbHcc_algo_H_mass__387->SetBinContent(37,0.5457518);
   VbbHcc_algo_H_mass__387->SetBinContent(38,0.5027701);
   VbbHcc_algo_H_mass__387->SetBinContent(39,0.4914394);
   VbbHcc_algo_H_mass__387->SetBinContent(40,0.4571038);
   VbbHcc_algo_H_mass__387->SetBinContent(41,27.13002);
   VbbHcc_algo_H_mass__387->SetBinError(4,0.003291255);
   VbbHcc_algo_H_mass__387->SetBinError(5,0.01141843);
   VbbHcc_algo_H_mass__387->SetBinError(6,0.01854548);
   VbbHcc_algo_H_mass__387->SetBinError(7,0.0304146);
   VbbHcc_algo_H_mass__387->SetBinError(8,0.05026778);
   VbbHcc_algo_H_mass__387->SetBinError(9,0.0771599);
   VbbHcc_algo_H_mass__387->SetBinError(10,0.08860312);
   VbbHcc_algo_H_mass__387->SetBinError(11,0.08124778);
   VbbHcc_algo_H_mass__387->SetBinError(12,0.0817417);
   VbbHcc_algo_H_mass__387->SetBinError(13,0.08294614);
   VbbHcc_algo_H_mass__387->SetBinError(14,0.07154581);
   VbbHcc_algo_H_mass__387->SetBinError(15,0.05430395);
   VbbHcc_algo_H_mass__387->SetBinError(16,0.04374447);
   VbbHcc_algo_H_mass__387->SetBinError(17,0.03801114);
   VbbHcc_algo_H_mass__387->SetBinError(18,0.03448303);
   VbbHcc_algo_H_mass__387->SetBinError(19,0.03190428);
   VbbHcc_algo_H_mass__387->SetBinError(20,0.03185881);
   VbbHcc_algo_H_mass__387->SetBinError(21,0.03066495);
   VbbHcc_algo_H_mass__387->SetBinError(22,0.03074383);
   VbbHcc_algo_H_mass__387->SetBinError(23,0.02993058);
   VbbHcc_algo_H_mass__387->SetBinError(24,0.03055552);
   VbbHcc_algo_H_mass__387->SetBinError(25,0.02857697);
   VbbHcc_algo_H_mass__387->SetBinError(26,0.02947646);
   VbbHcc_algo_H_mass__387->SetBinError(27,0.02845199);
   VbbHcc_algo_H_mass__387->SetBinError(28,0.02871591);
   VbbHcc_algo_H_mass__387->SetBinError(29,0.02756658);
   VbbHcc_algo_H_mass__387->SetBinError(30,0.02761243);
   VbbHcc_algo_H_mass__387->SetBinError(31,0.0271127);
   VbbHcc_algo_H_mass__387->SetBinError(32,0.02660903);
   VbbHcc_algo_H_mass__387->SetBinError(33,0.0263533);
   VbbHcc_algo_H_mass__387->SetBinError(34,0.02673223);
   VbbHcc_algo_H_mass__387->SetBinError(35,0.02656511);
   VbbHcc_algo_H_mass__387->SetBinError(36,0.02471407);
   VbbHcc_algo_H_mass__387->SetBinError(37,0.02580734);
   VbbHcc_algo_H_mass__387->SetBinError(38,0.02511307);
   VbbHcc_algo_H_mass__387->SetBinError(39,0.02443327);
   VbbHcc_algo_H_mass__387->SetBinError(40,0.02355623);
   VbbHcc_algo_H_mass__387->SetBinError(41,0.183845);
   VbbHcc_algo_H_mass__387->SetEntries(72469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_mass__387->SetFillColor(ci);
   VbbHcc_algo_H_mass__387->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__387->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__387->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__387->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__387->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__387->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__387->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__387->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__387->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__387->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__387->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_16->Modified();
   H_mass_algo_16->cd();
   H_mass_algo_16->SetSelected(H_mass_algo_16);
}
