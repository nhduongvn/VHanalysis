#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_cjet1_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_cjet1_tagOnly_18/pt_cjet1_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_cjet1_tagOnly_18 = new TCanvas("pt_cjet1_tagOnly_18", "pt_cjet1_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_cjet1_tagOnly_18->SetHighLightColor(2);
   pt_cjet1_tagOnly_18->Range(-400,-1.775427e+09,2266.667,1.597884e+10);
   pt_cjet1_tagOnly_18->SetFillColor(0);
   pt_cjet1_tagOnly_18->SetFillStyle(4000);
   pt_cjet1_tagOnly_18->SetBorderMode(0);
   pt_cjet1_tagOnly_18->SetBorderSize(2);
   pt_cjet1_tagOnly_18->SetLeftMargin(0.15);
   pt_cjet1_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet1_tagOnly_18->SetFrameBorderMode(0);
   pt_cjet1_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet1_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_cjet1__122 = new TH1D("Jets_cut_pt_cjet1__122","",500,0,2000);
   Jets_cut_pt_cjet1__122->SetBinContent(12,1.057035e+10);
   Jets_cut_pt_cjet1__122->SetBinContent(13,1.352706e+10);
   Jets_cut_pt_cjet1__122->SetBinContent(14,1.017395e+10);
   Jets_cut_pt_cjet1__122->SetBinContent(15,7.179134e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(16,4.902895e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(17,3.361947e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(18,2.230085e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(19,1.471219e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(20,1.056254e+09);
   Jets_cut_pt_cjet1__122->SetBinContent(21,5.930851e+08);
   Jets_cut_pt_cjet1__122->SetBinContent(22,3.630207e+08);
   Jets_cut_pt_cjet1__122->SetBinContent(23,1.824365e+08);
   Jets_cut_pt_cjet1__122->SetBinContent(24,1.545613e+08);
   Jets_cut_pt_cjet1__122->SetBinContent(25,8.490632e+07);
   Jets_cut_pt_cjet1__122->SetBinContent(26,2.804895e+07);
   Jets_cut_pt_cjet1__122->SetBinContent(27,1.421264e+07);
   Jets_cut_pt_cjet1__122->SetBinContent(28,1.178159e+07);
   Jets_cut_pt_cjet1__122->SetBinContent(29,1.623132e+07);
   Jets_cut_pt_cjet1__122->SetBinContent(30,4129855);
   Jets_cut_pt_cjet1__122->SetBinContent(31,1955082);
   Jets_cut_pt_cjet1__122->SetBinContent(32,7170459);
   Jets_cut_pt_cjet1__122->SetBinContent(35,4391116);
   Jets_cut_pt_cjet1__122->SetBinContent(36,3143676);
   Jets_cut_pt_cjet1__122->SetBinContent(37,1086970);
   Jets_cut_pt_cjet1__122->SetBinContent(39,3003944);
   Jets_cut_pt_cjet1__122->SetBinContent(40,6113452);
   Jets_cut_pt_cjet1__122->SetBinContent(44,2380429);
   Jets_cut_pt_cjet1__122->SetBinContent(45,2999888);
   Jets_cut_pt_cjet1__122->SetBinContent(54,1688311);
   Jets_cut_pt_cjet1__122->SetBinContent(57,1814550);
   Jets_cut_pt_cjet1__122->SetBinContent(58,1066705);
   Jets_cut_pt_cjet1__122->SetBinContent(65,1841057);
   Jets_cut_pt_cjet1__122->SetBinContent(71,2207889);
   Jets_cut_pt_cjet1__122->SetBinError(12,1.744427e+08);
   Jets_cut_pt_cjet1__122->SetBinError(13,1.984628e+08);
   Jets_cut_pt_cjet1__122->SetBinError(14,1.690181e+08);
   Jets_cut_pt_cjet1__122->SetBinError(15,1.386e+08);
   Jets_cut_pt_cjet1__122->SetBinError(16,1.139932e+08);
   Jets_cut_pt_cjet1__122->SetBinError(17,9.879163e+07);
   Jets_cut_pt_cjet1__122->SetBinError(18,8.300593e+07);
   Jets_cut_pt_cjet1__122->SetBinError(19,6.929186e+07);
   Jets_cut_pt_cjet1__122->SetBinError(20,5.210689e+07);
   Jets_cut_pt_cjet1__122->SetBinError(21,3.807018e+07);
   Jets_cut_pt_cjet1__122->SetBinError(22,2.937909e+07);
   Jets_cut_pt_cjet1__122->SetBinError(23,1.912628e+07);
   Jets_cut_pt_cjet1__122->SetBinError(24,1.717025e+07);
   Jets_cut_pt_cjet1__122->SetBinError(25,1.338352e+07);
   Jets_cut_pt_cjet1__122->SetBinError(26,6305442);
   Jets_cut_pt_cjet1__122->SetBinError(27,4294237);
   Jets_cut_pt_cjet1__122->SetBinError(28,4842324);
   Jets_cut_pt_cjet1__122->SetBinError(29,6803615);
   Jets_cut_pt_cjet1__122->SetBinError(30,2421228);
   Jets_cut_pt_cjet1__122->SetBinError(31,1955082);
   Jets_cut_pt_cjet1__122->SetBinError(32,7170459);
   Jets_cut_pt_cjet1__122->SetBinError(35,2574359);
   Jets_cut_pt_cjet1__122->SetBinError(36,3143676);
   Jets_cut_pt_cjet1__122->SetBinError(37,1086970);
   Jets_cut_pt_cjet1__122->SetBinError(39,3003944);
   Jets_cut_pt_cjet1__122->SetBinError(40,6113452);
   Jets_cut_pt_cjet1__122->SetBinError(44,2380429);
   Jets_cut_pt_cjet1__122->SetBinError(45,2999888);
   Jets_cut_pt_cjet1__122->SetBinError(54,1688311);
   Jets_cut_pt_cjet1__122->SetBinError(57,1814550);
   Jets_cut_pt_cjet1__122->SetBinError(58,1066705);
   Jets_cut_pt_cjet1__122->SetBinError(65,1841057);
   Jets_cut_pt_cjet1__122->SetBinError(71,2207889);
   Jets_cut_pt_cjet1__122->SetEntries(26780);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_cjet1__122->SetLineColor(ci);
   Jets_cut_pt_cjet1__122->GetXaxis()->SetTitle("p_{T} (subleading c-jet) [GeV]");
   Jets_cut_pt_cjet1__122->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_cjet1__122->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet1__122->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet1__122->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet1__122->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_cjet1__122->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet1__122->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_cjet1__122->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_cjet1__122->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_cjet1__122->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet1__122->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet1__122->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet1__122->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet1__122->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_cjet1_tagOnly_18->Modified();
   pt_cjet1_tagOnly_18->cd();
   pt_cjet1_tagOnly_18->SetSelected(pt_cjet1_tagOnly_18);
}
