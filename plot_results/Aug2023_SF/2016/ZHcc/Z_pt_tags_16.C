#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(-400,-0.0009083459,2266.667,0.008175112);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLeftMargin(0.15);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_pt__44 = new TH1D("VbbHcc_tags_Z_pt__44","",1000,0,2000);
   VbbHcc_tags_Z_pt__44->SetBinContent(26,0.00204855);
   VbbHcc_tags_Z_pt__44->SetBinContent(48,0.001703818);
   VbbHcc_tags_Z_pt__44->SetBinContent(49,0.002135123);
   VbbHcc_tags_Z_pt__44->SetBinContent(56,0.001533761);
   VbbHcc_tags_Z_pt__44->SetBinContent(62,0.005122727);
   VbbHcc_tags_Z_pt__44->SetBinContent(64,0.002296727);
   VbbHcc_tags_Z_pt__44->SetBinContent(69,0.001929603);
   VbbHcc_tags_Z_pt__44->SetBinContent(73,0.00692073);
   VbbHcc_tags_Z_pt__44->SetBinContent(74,0.004767263);
   VbbHcc_tags_Z_pt__44->SetBinContent(79,0.001516135);
   VbbHcc_tags_Z_pt__44->SetBinContent(86,0.001425773);
   VbbHcc_tags_Z_pt__44->SetBinContent(87,0.003772862);
   VbbHcc_tags_Z_pt__44->SetBinContent(90,0.001775999);
   VbbHcc_tags_Z_pt__44->SetBinContent(94,0.003043712);
   VbbHcc_tags_Z_pt__44->SetBinContent(102,0.003196902);
   VbbHcc_tags_Z_pt__44->SetBinContent(106,0.004061551);
   VbbHcc_tags_Z_pt__44->SetBinContent(116,0.001912616);
   VbbHcc_tags_Z_pt__44->SetBinContent(122,0.004497893);
   VbbHcc_tags_Z_pt__44->SetBinContent(123,0.002370096);
   VbbHcc_tags_Z_pt__44->SetBinContent(124,0.002530526);
   VbbHcc_tags_Z_pt__44->SetBinContent(125,0.002821577);
   VbbHcc_tags_Z_pt__44->SetBinContent(136,0.002340957);
   VbbHcc_tags_Z_pt__44->SetBinContent(144,0.004493305);
   VbbHcc_tags_Z_pt__44->SetBinContent(152,0.002055762);
   VbbHcc_tags_Z_pt__44->SetBinContent(164,0.002318411);
   VbbHcc_tags_Z_pt__44->SetBinContent(185,0.002352597);
   VbbHcc_tags_Z_pt__44->SetBinContent(192,0.002472895);
   VbbHcc_tags_Z_pt__44->SetBinContent(254,0.001943164);
   VbbHcc_tags_Z_pt__44->SetBinError(26,0.00204855);
   VbbHcc_tags_Z_pt__44->SetBinError(48,0.001703818);
   VbbHcc_tags_Z_pt__44->SetBinError(49,0.002135123);
   VbbHcc_tags_Z_pt__44->SetBinError(56,0.001533761);
   VbbHcc_tags_Z_pt__44->SetBinError(62,0.003674154);
   VbbHcc_tags_Z_pt__44->SetBinError(64,0.002296727);
   VbbHcc_tags_Z_pt__44->SetBinError(69,0.001929603);
   VbbHcc_tags_Z_pt__44->SetBinError(73,0.004030485);
   VbbHcc_tags_Z_pt__44->SetBinError(74,0.003400242);
   VbbHcc_tags_Z_pt__44->SetBinError(79,0.001516135);
   VbbHcc_tags_Z_pt__44->SetBinError(86,0.001425773);
   VbbHcc_tags_Z_pt__44->SetBinError(87,0.002667904);
   VbbHcc_tags_Z_pt__44->SetBinError(90,0.001775999);
   VbbHcc_tags_Z_pt__44->SetBinError(94,0.003043712);
   VbbHcc_tags_Z_pt__44->SetBinError(102,0.003196902);
   VbbHcc_tags_Z_pt__44->SetBinError(106,0.002885537);
   VbbHcc_tags_Z_pt__44->SetBinError(116,0.001912616);
   VbbHcc_tags_Z_pt__44->SetBinError(122,0.003212861);
   VbbHcc_tags_Z_pt__44->SetBinError(123,0.002370096);
   VbbHcc_tags_Z_pt__44->SetBinError(124,0.002530526);
   VbbHcc_tags_Z_pt__44->SetBinError(125,0.002821577);
   VbbHcc_tags_Z_pt__44->SetBinError(136,0.002340957);
   VbbHcc_tags_Z_pt__44->SetBinError(144,0.003178722);
   VbbHcc_tags_Z_pt__44->SetBinError(152,0.002055762);
   VbbHcc_tags_Z_pt__44->SetBinError(164,0.002318411);
   VbbHcc_tags_Z_pt__44->SetBinError(185,0.002352597);
   VbbHcc_tags_Z_pt__44->SetBinError(192,0.002472895);
   VbbHcc_tags_Z_pt__44->SetBinError(254,0.001943164);
   VbbHcc_tags_Z_pt__44->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt__44->SetFillColor(ci);
   VbbHcc_tags_Z_pt__44->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_tags_Z_pt__44->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_Z_pt__44->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__44->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__44->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__44->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__44->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__44->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__44->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__44->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__44->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
