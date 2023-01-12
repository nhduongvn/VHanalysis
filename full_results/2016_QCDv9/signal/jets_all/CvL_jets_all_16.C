#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_16()
{
//=========Macro generated from canvas: CvL_jets_all_16/CvL_jets_all_16
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_16 = new TCanvas("CvL_jets_all_16", "CvL_jets_all_16",0,0,600,600);
   CvL_jets_all_16->SetHighLightColor(2);
   CvL_jets_all_16->Range(-0.2183529,-581.4657,1.171633,4264.082);
   CvL_jets_all_16->SetFillColor(0);
   CvL_jets_all_16->SetFillStyle(4000);
   CvL_jets_all_16->SetBorderMode(0);
   CvL_jets_all_16->SetBorderSize(2);
   CvL_jets_all_16->SetLeftMargin(0.15709);
   CvL_jets_all_16->SetRightMargin(0.1234783);
   CvL_jets_all_16->SetBottomMargin(0.12);
   CvL_jets_all_16->SetFrameFillStyle(1000);
   CvL_jets_all_16->SetFrameBorderMode(0);
   CvL_jets_all_16->SetFrameFillStyle(1000);
   CvL_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3779.527);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",20,0,1);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(3779.527);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_113->GetXaxis()->SetRange(1,20);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.05");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,477.3949);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,2184.752);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,598.6046);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,213.4262);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,123.5484);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,81.40031);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,60.55191);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,47.093);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,40.916);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,34.72489);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,29.92577);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,25.43544);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,23.81506);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,20.95143);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,18.54445);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,16.77297);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,15.42848);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,14.68963);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,13.95692);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,3.645339);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,0.8727329);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,1.8642);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,0.9724699);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,0.5815646);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.4427485);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.3598082);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.3109178);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.2742817);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.2556187);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.2358136);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.2193589);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.2022059);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.1957268);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.1831909);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.1727579);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.1646151);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.1579112);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.1542667);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.1498508);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,0.07633158);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(3094384);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,93.83599);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,334.9324);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,93.0862);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,34.5571);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,20.33787);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,13.62481);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,10.21996);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,8.084916);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,7.063363);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,6.033438);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,5.301627);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,4.529009);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,4.254297);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,3.840338);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,3.44987);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3.129778);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,3.06253);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,2.985996);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,3.05233);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,0.9250581);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.1338741);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.2506859);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.1319627);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.08063084);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.06193029);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.05074283);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.04397124);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.03914332);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.03662204);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.03385148);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.03176);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.02935826);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.02848438);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.0270743);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.02567067);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.02445089);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.02422657);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.02391465);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.0241936);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.01334402);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3799395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_16->Modified();
   CvL_jets_all_16->cd();
   CvL_jets_all_16->SetSelected(CvL_jets_all_16);
}
