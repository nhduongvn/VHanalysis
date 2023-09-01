#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-77.91304,1.133333,701.2173);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__217 = new TH1D("VbbHcc_tags_Sphericity__217","",25,0,1);
   VbbHcc_tags_Sphericity__217->SetBinContent(1,593.6231);
   VbbHcc_tags_Sphericity__217->SetBinContent(2,468.4105);
   VbbHcc_tags_Sphericity__217->SetBinContent(3,283.8381);
   VbbHcc_tags_Sphericity__217->SetBinContent(4,180.0374);
   VbbHcc_tags_Sphericity__217->SetBinContent(5,81.97487);
   VbbHcc_tags_Sphericity__217->SetBinContent(6,49.3376);
   VbbHcc_tags_Sphericity__217->SetBinContent(7,22.00473);
   VbbHcc_tags_Sphericity__217->SetBinContent(8,13.56833);
   VbbHcc_tags_Sphericity__217->SetBinContent(9,10.56066);
   VbbHcc_tags_Sphericity__217->SetBinContent(10,7.997821);
   VbbHcc_tags_Sphericity__217->SetBinContent(11,4.598575);
   VbbHcc_tags_Sphericity__217->SetBinContent(12,3.830929);
   VbbHcc_tags_Sphericity__217->SetBinContent(13,1.893421);
   VbbHcc_tags_Sphericity__217->SetBinContent(14,2.075553);
   VbbHcc_tags_Sphericity__217->SetBinContent(15,2.138187);
   VbbHcc_tags_Sphericity__217->SetBinContent(16,1.844783);
   VbbHcc_tags_Sphericity__217->SetBinContent(17,1.822596);
   VbbHcc_tags_Sphericity__217->SetBinContent(18,0.611407);
   VbbHcc_tags_Sphericity__217->SetBinContent(19,0.2956113);
   VbbHcc_tags_Sphericity__217->SetBinContent(20,0.06400073);
   VbbHcc_tags_Sphericity__217->SetBinContent(21,0.09522965);
   VbbHcc_tags_Sphericity__217->SetBinError(1,16.37995);
   VbbHcc_tags_Sphericity__217->SetBinError(2,14.8242);
   VbbHcc_tags_Sphericity__217->SetBinError(3,13.18557);
   VbbHcc_tags_Sphericity__217->SetBinError(4,11.14226);
   VbbHcc_tags_Sphericity__217->SetBinError(5,4.331546);
   VbbHcc_tags_Sphericity__217->SetBinError(6,4.540663);
   VbbHcc_tags_Sphericity__217->SetBinError(7,1.692132);
   VbbHcc_tags_Sphericity__217->SetBinError(8,1.192122);
   VbbHcc_tags_Sphericity__217->SetBinError(9,1.055029);
   VbbHcc_tags_Sphericity__217->SetBinError(10,1.107252);
   VbbHcc_tags_Sphericity__217->SetBinError(11,0.7020029);
   VbbHcc_tags_Sphericity__217->SetBinError(12,0.7841658);
   VbbHcc_tags_Sphericity__217->SetBinError(13,0.3609816);
   VbbHcc_tags_Sphericity__217->SetBinError(14,0.4962995);
   VbbHcc_tags_Sphericity__217->SetBinError(15,0.4461744);
   VbbHcc_tags_Sphericity__217->SetBinError(16,0.4663833);
   VbbHcc_tags_Sphericity__217->SetBinError(17,0.3985678);
   VbbHcc_tags_Sphericity__217->SetBinError(18,0.2094056);
   VbbHcc_tags_Sphericity__217->SetBinError(19,0.1334602);
   VbbHcc_tags_Sphericity__217->SetBinError(20,0.06400073);
   VbbHcc_tags_Sphericity__217->SetBinError(21,0.09522965);
   VbbHcc_tags_Sphericity__217->SetEntries(14937);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity__217->SetFillColor(ci);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__217->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__217->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__217->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
