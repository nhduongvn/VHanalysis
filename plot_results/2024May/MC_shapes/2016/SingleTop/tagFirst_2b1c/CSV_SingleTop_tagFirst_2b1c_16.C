#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_SingleTop_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CSV_SingleTop_tagFirst_2b1c_16/CSV_SingleTop_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CSV_SingleTop_tagFirst_2b1c_16 = new TCanvas("CSV_SingleTop_tagFirst_2b1c_16", "CSV_SingleTop_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_SingleTop_tagFirst_2b1c_16->SetHighLightColor(2);
   CSV_SingleTop_tagFirst_2b1c_16->Range(-0.2,-1567961,1.133333,1.411165e+07);
   CSV_SingleTop_tagFirst_2b1c_16->SetFillColor(0);
   CSV_SingleTop_tagFirst_2b1c_16->SetFillStyle(4000);
   CSV_SingleTop_tagFirst_2b1c_16->SetBorderMode(0);
   CSV_SingleTop_tagFirst_2b1c_16->SetBorderSize(2);
   CSV_SingleTop_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CSV_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CSV_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6709 = new TH1D("Jets_cut_CSV__6709","",20,0,1);
   Jets_cut_CSV__6709->SetBinContent(1,1.194637e+07);
   Jets_cut_CSV__6709->SetBinContent(2,1460146);
   Jets_cut_CSV__6709->SetBinContent(3,728969.5);
   Jets_cut_CSV__6709->SetBinContent(4,496127.8);
   Jets_cut_CSV__6709->SetBinContent(5,392483.3);
   Jets_cut_CSV__6709->SetBinContent(6,334141.9);
   Jets_cut_CSV__6709->SetBinContent(7,279984.2);
   Jets_cut_CSV__6709->SetBinContent(8,252997.9);
   Jets_cut_CSV__6709->SetBinContent(9,234588.4);
   Jets_cut_CSV__6709->SetBinContent(10,228368.1);
   Jets_cut_CSV__6709->SetBinContent(11,229907.9);
   Jets_cut_CSV__6709->SetBinContent(12,231102.5);
   Jets_cut_CSV__6709->SetBinContent(13,234029.3);
   Jets_cut_CSV__6709->SetBinContent(14,249323.8);
   Jets_cut_CSV__6709->SetBinContent(15,267920.3);
   Jets_cut_CSV__6709->SetBinContent(16,309203.7);
   Jets_cut_CSV__6709->SetBinContent(17,348735.8);
   Jets_cut_CSV__6709->SetBinContent(18,431951.4);
   Jets_cut_CSV__6709->SetBinContent(19,674978.4);
   Jets_cut_CSV__6709->SetBinContent(20,4240349);
   Jets_cut_CSV__6709->SetBinError(1,1729.805);
   Jets_cut_CSV__6709->SetBinError(2,614.8989);
   Jets_cut_CSV__6709->SetBinError(3,436.6013);
   Jets_cut_CSV__6709->SetBinError(4,360.1759);
   Jets_cut_CSV__6709->SetBinError(5,320.9761);
   Jets_cut_CSV__6709->SetBinError(6,296.3622);
   Jets_cut_CSV__6709->SetBinError(7,262.5944);
   Jets_cut_CSV__6709->SetBinError(8,248.417);
   Jets_cut_CSV__6709->SetBinError(9,237.9186);
   Jets_cut_CSV__6709->SetBinError(10,235.496);
   Jets_cut_CSV__6709->SetBinError(11,236.7242);
   Jets_cut_CSV__6709->SetBinError(12,237.4199);
   Jets_cut_CSV__6709->SetBinError(13,241.4429);
   Jets_cut_CSV__6709->SetBinError(14,251.1527);
   Jets_cut_CSV__6709->SetBinError(15,260.176);
   Jets_cut_CSV__6709->SetBinError(16,279.7184);
   Jets_cut_CSV__6709->SetBinError(17,296.467);
   Jets_cut_CSV__6709->SetBinError(18,330.0012);
   Jets_cut_CSV__6709->SetBinError(19,411.8162);
   Jets_cut_CSV__6709->SetBinError(20,1029.677);
   Jets_cut_CSV__6709->SetEntries(3.067202e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6709->SetLineColor(ci);
   Jets_cut_CSV__6709->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6709->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6709->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6709->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6709->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6709->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6709->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6709->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6709->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6709->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6709->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6709->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6709->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6709->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6709->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_SingleTop_tagFirst_2b1c_16->Modified();
   CSV_SingleTop_tagFirst_2b1c_16->cd();
   CSV_SingleTop_tagFirst_2b1c_16->SetSelected(CSV_SingleTop_tagFirst_2b1c_16);
}
