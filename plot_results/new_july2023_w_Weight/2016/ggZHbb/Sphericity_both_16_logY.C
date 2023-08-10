void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:21:49 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-3.74182,1.133333,1.274046);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.851955);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.125434);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.302895);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.775328);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.56716);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.254229);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.039326);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.9141478);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.7745782);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.6778681);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.5841162);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4939976);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.4177715);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3738118);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2913795);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2445693);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1703101);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1283188);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.07982004);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03598309);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008027822);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002713787);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.00115026);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03322562);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03476309);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.0298599);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02622346);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.024632);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02206323);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02004687);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01878987);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01734833);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01621994);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01506293);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01383642);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01273809);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.0120658);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01062028);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009715027);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.008132745);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.007022899);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.005539165);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003740097);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001763617);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001029566);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0006641121);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
