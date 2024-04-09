#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dPhi_DHZfirst_16/Z_dPhi_DHZfirst_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_DHZfirst_16 = new TCanvas("Z_dPhi_DHZfirst_16", "Z_dPhi_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_DHZfirst_16->SetHighLightColor(2);
   Z_dPhi_DHZfirst_16->Range(-0.8,-0.002243119,4.533333,0.02018807);
   Z_dPhi_DHZfirst_16->SetFillColor(0);
   Z_dPhi_DHZfirst_16->SetFillStyle(4000);
   Z_dPhi_DHZfirst_16->SetBorderMode(0);
   Z_dPhi_DHZfirst_16->SetBorderSize(2);
   Z_dPhi_DHZfirst_16->SetLeftMargin(0.15);
   Z_dPhi_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_16->SetFrameBorderMode(0);
   Z_dPhi_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__163 = new TH1D("VH_DHZfirst_Z_dPhi__163","",120,0,4);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(0,0.1629304);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(1,0.001974036);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(2,0.005349616);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(3,0.002038891);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(4,0.005277934);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(5,0.001855675);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(6,0.001367477);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(8,0.005883279);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(9,0.008780279);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(10,0.001692034);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(11,0.00946853);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(12,0.002694071);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(13,0.003591784);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(14,0.008342165);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(15,0.002821312);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(16,0.002268632);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(17,0.005661165);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(18,0.004292076);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(19,0.007098554);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(20,0.01709043);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(21,0.003436682);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(22,0.008761374);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(23,0.0039206);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(24,0.00371087);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(25,0.003492919);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(26,0.004109227);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(27,0.004178667);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(28,0.001398732);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(30,0.004027979);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(31,0.003486921);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(32,0.003581401);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(35,0.001752339);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(37,0.006653056);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(42,0.001919091);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(47,0.002816038);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(56,0.002242986);
   VH_DHZfirst_Z_dPhi__163->SetBinContent(67,0.002002857);
   VH_DHZfirst_Z_dPhi__163->SetBinError(0,0.01817938);
   VH_DHZfirst_Z_dPhi__163->SetBinError(1,0.001974036);
   VH_DHZfirst_Z_dPhi__163->SetBinError(2,0.003114543);
   VH_DHZfirst_Z_dPhi__163->SetBinError(3,0.002038891);
   VH_DHZfirst_Z_dPhi__163->SetBinError(4,0.00305228);
   VH_DHZfirst_Z_dPhi__163->SetBinError(5,0.001855675);
   VH_DHZfirst_Z_dPhi__163->SetBinError(6,0.001367477);
   VH_DHZfirst_Z_dPhi__163->SetBinError(8,0.003399255);
   VH_DHZfirst_Z_dPhi__163->SetBinError(9,0.004416481);
   VH_DHZfirst_Z_dPhi__163->SetBinError(10,0.001692034);
   VH_DHZfirst_Z_dPhi__163->SetBinError(11,0.004283338);
   VH_DHZfirst_Z_dPhi__163->SetBinError(12,0.002694071);
   VH_DHZfirst_Z_dPhi__163->SetBinError(13,0.002557917);
   VH_DHZfirst_Z_dPhi__163->SetBinError(14,0.004179084);
   VH_DHZfirst_Z_dPhi__163->SetBinError(15,0.002105005);
   VH_DHZfirst_Z_dPhi__163->SetBinError(16,0.002268632);
   VH_DHZfirst_Z_dPhi__163->SetBinError(17,0.003303116);
   VH_DHZfirst_Z_dPhi__163->SetBinError(18,0.00304919);
   VH_DHZfirst_Z_dPhi__163->SetBinError(19,0.004126629);
   VH_DHZfirst_Z_dPhi__163->SetBinError(20,0.005587147);
   VH_DHZfirst_Z_dPhi__163->SetBinError(21,0.002430136);
   VH_DHZfirst_Z_dPhi__163->SetBinError(22,0.003947593);
   VH_DHZfirst_Z_dPhi__163->SetBinError(23,0.002772325);
   VH_DHZfirst_Z_dPhi__163->SetBinError(24,0.002623982);
   VH_DHZfirst_Z_dPhi__163->SetBinError(25,0.002471882);
   VH_DHZfirst_Z_dPhi__163->SetBinError(26,0.002910314);
   VH_DHZfirst_Z_dPhi__163->SetBinError(27,0.002959836);
   VH_DHZfirst_Z_dPhi__163->SetBinError(28,0.001398732);
   VH_DHZfirst_Z_dPhi__163->SetBinError(30,0.002861399);
   VH_DHZfirst_Z_dPhi__163->SetBinError(31,0.002469614);
   VH_DHZfirst_Z_dPhi__163->SetBinError(32,0.00253428);
   VH_DHZfirst_Z_dPhi__163->SetBinError(35,0.001752339);
   VH_DHZfirst_Z_dPhi__163->SetBinError(37,0.003354218);
   VH_DHZfirst_Z_dPhi__163->SetBinError(42,0.001919091);
   VH_DHZfirst_Z_dPhi__163->SetBinError(47,0.002816038);
   VH_DHZfirst_Z_dPhi__163->SetBinError(56,0.002242986);
   VH_DHZfirst_Z_dPhi__163->SetBinError(67,0.002002857);
   VH_DHZfirst_Z_dPhi__163->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__163->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__163->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__163->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__163->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__163->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__163->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__163->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__163->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__163->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__163->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__163->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_DHZfirst_16->Modified();
   Z_dPhi_DHZfirst_16->cd();
   Z_dPhi_DHZfirst_16->SetSelected(Z_dPhi_DHZfirst_16);
}
