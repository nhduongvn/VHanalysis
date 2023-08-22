void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Tue Aug 22 09:17:22 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-1.455732,6.8,1.884269);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLogy();
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,9.671155);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,18.73786);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,13.60006);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,10.12449);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,6.346696);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,4.684466);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,1.66223);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.173348);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,2.568901);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.964453);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.057783);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,0.755559);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6044472);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.6044472);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(15,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(17,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(19,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.208894);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.68271);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.433572);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.236903);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.9793164);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.8413549);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.5011811);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.6924813);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.6230499);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.5448413);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3998042);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.3378963);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(15,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(17,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(19,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(510);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
